/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPGridButton : NSObject <CPControl, NSSecureCoding> {
    <CPControlDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    UIImage * _image;
    NSArray * _titleVariants;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (id)titleVariants;

@end
