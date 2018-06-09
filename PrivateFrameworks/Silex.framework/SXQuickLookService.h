/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookService : NSObject <SXQuickLookService> {
    NSOperationQueue * _thumbnailQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSOperationQueue *thumbnailQueue;

- (void).cxx_destruct;
- (void)fetchThumbnailForFile:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 onCompletion:(id /* block */)arg3 onError:(id /* block */)arg4;
- (id)init;
- (id)thumbnailQueue;

@end
