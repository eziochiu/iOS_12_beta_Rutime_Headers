/* made by EzioChiu.
 */

@protocol CKAdaptivePresentedControllerProtocol <NSObject>

@required

- (bool)preserveModalPresentationStyle;
- (bool)wantsWindowedPresentation;

@optional

- (bool)constrainToPresentingVCBounds;
- (bool)forceWindowedPresentation;

@end
