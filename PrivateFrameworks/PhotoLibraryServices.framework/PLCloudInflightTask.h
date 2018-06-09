/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudInflightTask : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _progressBlock;
}

@property (readonly) id /* block */ completionHandler;
@property (readonly) id /* block */ progressBlock;

- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)progressBlock;

@end
