/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPNavigationAlert : NSObject <NSSecureCoding> {
    unsigned long long  _alertPriority;
    double  _duration;
    NSUUID * _identifier;
    UIImage * _image;
    CPAlertAction * _primaryAction;
    CPAlertAction * _secondaryAction;
    NSArray * _subtitleVariants;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly) unsigned long long alertPriority;
@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly) CPAlertAction *primaryAction;
@property (nonatomic, readonly) CPAlertAction *secondaryAction;
@property (nonatomic, readonly, copy) NSArray *subtitleVariants;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)alertPriority;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 priority:(unsigned long long)arg4 primaryAction:(id)arg5 secondaryAction:(id)arg6 duration:(double)arg7;
- (id)primaryAction;
- (id)secondaryAction;
- (void)setIdentifier:(id)arg1;
- (id)subtitleVariants;
- (id)titleVariants;

@end
