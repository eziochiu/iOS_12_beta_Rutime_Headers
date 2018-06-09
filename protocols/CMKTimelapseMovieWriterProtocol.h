/* made by EzioChiu.
 */

@protocol CMKTimelapseMovieWriterProtocol <NSObject>

@required

- (void)writeMovieFromImageFiles:(void *)arg1 visMetadataFiles:(void *)arg2 startDate:(void *)arg3 location:(void *)arg4 outputPath:(void *)arg5 transform:(void *)arg6 framesPerSecond:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 14: NSArray *, NSArray *, NSDate *, CLLocation *, NSString *, struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, void*

@end
