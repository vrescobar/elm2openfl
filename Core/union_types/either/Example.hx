package;

/* This is a union type that lets you put together two types.
    If you tag a value with 'Left' it can have type 'A' and if you
    tag a value with 'Right' it can have type 'B'.
*/

enum Either<A,B> {
    Left(a:A);
    Right(b:B);
}
typedef EitherArray<A,B> = Array<Either<A,B>>; // just for comfortableness

class Example {
    static function main() {
        var userIDs:EitherArray<Int,String> = [Left(42), Right("12A3BC"), Left(1337), Right("ZA7T9G")];
        Sys.println(partition(userIDs));
    }
    /* Starting with a list of eithers, partition them into a list of left values and a list of right values.

     Note partition uses a generic Type and being still satic typed :)
    */

    static function partition<A,B>(eithers:EitherArray<A,B>):Array<EitherArray<A,B>> {
        if (eithers.length == 0) return [[],[]];
        var head = eithers[0];
        var rest = eithers.slice(1, eithers.length);
        /* * * * */
        var results = partition(rest);
        var lefts = results[0];
        var rights = results[1];
        /* * * * */
        return switch head {
            case Left(a): [[Left(a)].concat(lefts), rights];
            case Right(b): [lefts, [Right(b)].concat(rights)];
        }
    }
}

