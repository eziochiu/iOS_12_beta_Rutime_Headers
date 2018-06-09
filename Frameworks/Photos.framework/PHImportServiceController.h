/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportServiceController : NSObject {
    id  _processInfoActivityToken;
    NSMutableArray * _runningImports;
}

@property (nonatomic, retain) id processInfoActivityToken;
@property (nonatomic, retain) NSMutableArray *runningImports;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 atEnd:(id /* block */)arg6;
- (id)processInfoActivityToken;
- (void)runningImportCount:(id /* block */)arg1;
- (id)runningImports;
- (void)runningImports:(id /* block */)arg1;
- (void)setProcessInfoActivityToken:(id)arg1;
- (void)setRunningImports:(id)arg1;

@end
