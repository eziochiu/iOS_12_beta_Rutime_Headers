/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate> {
    UIImage * _animatedImage;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly) UIImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPVoiceTemplateProviding> *templateProvider;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)animatedImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 animatedImage:(id)arg2;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)titleVariants;
- (id)trailingNavigationBarButtons;

@end
