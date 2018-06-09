/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding> {
    ADMRAIDAction * _MRAIDAction;
    int  _action;
    bool  _actionLeavesApplication;
    NSString * _actionURLString;
    bool  _actionViewControllerHidesStatusBar;
    unsigned long long  _actionViewControllerPresentationOrientationMask;
    NSNumber * _adamIdentifier;
    NSString * _calendarEventIdentifier;
    NSArray * _iTunesMetadata;
    int  _transitionType;
}

@property (nonatomic, copy) ADMRAIDAction *MRAIDAction;
@property (nonatomic) int action;
@property (nonatomic) bool actionLeavesApplication;
@property (nonatomic, copy) NSString *actionURLString;
@property (nonatomic) bool actionViewControllerHidesStatusBar;
@property (nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;
@property (nonatomic, copy) NSNumber *adamIdentifier;
@property (nonatomic, copy) NSString *calendarEventIdentifier;
@property (nonatomic, copy) NSArray *iTunesMetadata;
@property (nonatomic) int transitionType;

+ (bool)supportsSecureCoding;

- (id)MRAIDAction;
- (id)_actionDescription;
- (int)action;
- (bool)actionLeavesApplication;
- (id)actionURLString;
- (bool)actionViewControllerHidesStatusBar;
- (unsigned long long)actionViewControllerPresentationOrientationMask;
- (id)adamIdentifier;
- (id)calendarEventIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesMetadata;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setActionLeavesApplication:(bool)arg1;
- (void)setActionURLString:(id)arg1;
- (void)setActionViewControllerHidesStatusBar:(bool)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1;
- (void)setAdamIdentifier:(id)arg1;
- (void)setCalendarEventIdentifier:(id)arg1;
- (void)setITunesMetadata:(id)arg1;
- (void)setMRAIDAction:(id)arg1;
- (void)setTransitionType:(int)arg1;
- (int)transitionType;

@end
