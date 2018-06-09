/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVInteractionObserver : NSObject <SVInteractionObserving> {
    id /* block */  _didBlock;
    id /* block */  _willBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ didBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ willBlock;

- (void).cxx_destruct;
- (id /* block */)didBlock;
- (void)didHandleInteractionWithContext:(id)arg1;
- (id)initWithDidHandleInteractionBlock:(id /* block */)arg1;
- (id)initWithWillHandleInteractionBlock:(id /* block */)arg1;
- (id)initWithWillHandleInteractionBlock:(id /* block */)arg1 didHandleInteractionBlock:(id /* block */)arg2;
- (id /* block */)willBlock;
- (void)willHandleInteractionWithContext:(id)arg1;

@end
