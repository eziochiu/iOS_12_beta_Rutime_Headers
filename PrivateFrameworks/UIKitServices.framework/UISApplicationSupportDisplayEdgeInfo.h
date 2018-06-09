/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying> {
    NSNumber * _homeAffordanceOverlayAllowance;
    union { 
        unsigned long long asInt; 
        struct { 
            unsigned int assertOnMutationAttempt : 1; 
        } flags; 
    }  _infoFlags;
    UISApplicationSupportDisplayEdgeInsetsWrapper * _peripheryInsets;
    UISApplicationSupportDisplayEdgeInsetsWrapper * _safeAreaInsetsLandscapeLeft;
    UISApplicationSupportDisplayEdgeInsetsWrapper * _safeAreaInsetsLandscapeRight;
    UISApplicationSupportDisplayEdgeInsetsWrapper * _safeAreaInsetsPortrait;
    UISApplicationSupportDisplayEdgeInsetsWrapper * _safeAreaInsetsPortraitUpsideDown;
    NSNumber * _systemMinimumMargin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *homeAffordanceOverlayAllowance;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *systemMinimumMargin;

+ (id)defaultDisplayEdgeInfo;
+ (id)defaultDisplayEdgeInfoForceInsets:(bool)arg1;

- (void).cxx_destruct;
- (void)_copyFromOtherInfo:(id)arg1;
- (void)_performIvarUpdateIfAllowed:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)homeAffordanceOverlayAllowance;
- (id)initWithXPCDictionary:(id)arg1;
- (id)peripheryInsets;
- (id)safeAreaInsetsLandscapeLeft;
- (id)safeAreaInsetsLandscapeRight;
- (id)safeAreaInsetsPortrait;
- (id)safeAreaInsetsPortraitUpsideDown;
- (void)setHomeAffordanceOverlayAllowance:(id)arg1;
- (void)setPeripheryInsets:(id)arg1;
- (void)setSafeAreaInsetsLandscapeLeft:(id)arg1;
- (void)setSafeAreaInsetsLandscapeRight:(id)arg1;
- (void)setSafeAreaInsetsPortrait:(id)arg1;
- (void)setSafeAreaInsetsPortraitUpsideDown:(id)arg1;
- (void)setSystemMinimumMargin:(id)arg1;
- (id)systemMinimumMargin;

@end
