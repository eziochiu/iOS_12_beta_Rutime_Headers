/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCalloutAccessoryWrapperView : NUIContainerBoxView <NUIContainerBoxViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wrappedAccessoryViewIfNeeded:(id)arg1 fillingPosition:(long long)arg2;

- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
