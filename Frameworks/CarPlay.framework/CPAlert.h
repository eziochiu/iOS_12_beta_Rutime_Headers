/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPAlert : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSUUID * _identifier;
    unsigned long long  _style;
    <CPAlertDelegate> * _templateDelegate;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) UIAlertController *alertControllerRepresentation;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, retain) <CPAlertDelegate> *templateDelegate;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

// Image: /System/Library/Frameworks/CarPlay.framework/CarPlay

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 style:(unsigned long long)arg2 actions:(id)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (unsigned long long)style;
- (id)templateDelegate;
- (void)templateDidAppear:(id)arg1 animated:(bool)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(bool)arg2;
- (void)templateWillAppear:(id)arg1 animated:(bool)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(bool)arg2;
- (id)titleVariants;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)alertControllerRepresentation;

@end
