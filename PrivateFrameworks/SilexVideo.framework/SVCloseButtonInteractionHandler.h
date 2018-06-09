/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVCloseButtonInteractionHandler : NSObject <SVInteractionHandling> {
    <SVVideoCloseInteractionHandler> * _closeInteractionHandler;
}

@property (nonatomic, readonly) <SVVideoCloseInteractionHandler> *closeInteractionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)closeInteractionHandler;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithCloseInteractionHandler:(id)arg1;

@end
