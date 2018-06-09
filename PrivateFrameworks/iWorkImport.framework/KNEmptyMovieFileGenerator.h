/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNEmptyMovieFileGenerator : NSObject {
    double  _duration;
    NSURL * _generatedFileURL;
}

@property (nonatomic, readonly) NSURL *generatedFileURL;

- (void).cxx_destruct;
- (void)generateFileWithCompletionHandler:(id /* block */)arg1;
- (id)generatedFileURL;
- (id)init;
- (id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2;

@end
