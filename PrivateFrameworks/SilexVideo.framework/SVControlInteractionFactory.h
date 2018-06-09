/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVControlInteractionFactory : NSObject <SVControlInteractionFactory> {
    <SVInteractionContextFactory> * _interactionContextFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVInteractionContextFactory> *interactionContextFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionWithControl:(id)arg1 events:(unsigned long long)arg2;
- (id)initWithInteractionContextFactory:(id)arg1;
- (id)interactionContextFactory;

@end
