/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPBarButton : NSObject <CPControl, NSSecureCoding> {
    unsigned long long  _buttonType;
    <CPBarButtonDelegate> * _delegate;
    bool  _enabled;
    id /* block */  _handler;
    NSUUID * _identifier;
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic) unsigned long long buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPBarButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)buttonType;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePrimaryAction;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (bool)isEnabled;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
