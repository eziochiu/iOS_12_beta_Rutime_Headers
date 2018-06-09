/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {
    NSLayoutConstraint * _imageToLabelConstraint;
    UIImageView * _shieldImageView;
    _MKUILabel * _systemLabel;
    NSLayoutConstraint * _systemLabelToTopConstraint;
}

@property (nonatomic, retain) UIImage *systemArtwork;
@property (nonatomic, copy) NSString *systemName;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setSystemArtwork:(id)arg1;
- (void)setSystemName:(id)arg1;
- (id)systemArtwork;
- (id)systemName;

@end
