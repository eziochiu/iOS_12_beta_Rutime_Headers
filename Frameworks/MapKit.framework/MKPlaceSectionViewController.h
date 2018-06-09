/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionViewController : UIViewController <MKPlaceSectionViewDelegate, _MKAnimationStackViewDelegate> {
    MKPlaceSectionView * _sectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKPlaceSectionView *sectionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (void)dealloc;
- (void)loadView;
- (id)sectionView;
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)stackViewNeedsLayout:(id)arg1;

@end
