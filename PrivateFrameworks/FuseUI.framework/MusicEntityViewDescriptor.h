/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewDescriptor : NSObject <NSCopying> {
    bool  _defaultAllowsSectionHeaders;
    MusicEntityViewContentDescriptor * _defaultContentDescriptor;
    MusicEntityViewContentDescriptor * _defaultSectionHeaderContentDescriptor;
    <MusicEntityProviding> * _entityProvider;
    long long  _scrollIndicatorStyle;
    long long  _sectionHeaderHairlineStyleForNonFloatingState;
    UIColor * _sectionHeaderTextColorForNonFloatingState;
    double  _sectionHeaderTopContentInset;
    bool  _sectionHeaderViewsFloat;
    bool  _trailingSeparatorInsetFollowsLayoutInsets;
    bool  _usesUppercaseLettersForSectionHeaderTitles;
}

@property (nonatomic) bool defaultAllowsSectionHeaders;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *defaultContentDescriptor;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *defaultSectionHeaderContentDescriptor;
@property (nonatomic, retain) <MusicEntityProviding> *entityProvider;
@property (nonatomic) long long scrollIndicatorStyle;
@property (nonatomic) long long sectionHeaderHairlineStyleForNonFloatingState;
@property (nonatomic, retain) UIColor *sectionHeaderTextColorForNonFloatingState;
@property (nonatomic) double sectionHeaderTopContentInset;
@property (nonatomic) bool sectionHeaderViewsFloat;
@property (nonatomic) bool trailingSeparatorInsetFollowsLayoutInsets;
@property (nonatomic) bool usesUppercaseLettersForSectionHeaderTitles;

- (void).cxx_destruct;
- (bool)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultAllowsSectionHeaders;
- (id)defaultContentDescriptor;
- (id)defaultSectionHeaderContentDescriptor;
- (id)entityProvider;
- (void)enumerateContentDescriptorsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionHeaderContentDescriptorsUsingBlock:(id /* block */)arg1;
- (bool)includesShuffleAction;
- (id)init;
- (long long)scrollIndicatorStyle;
- (id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1;
- (long long)sectionHeaderHairlineStyleForNonFloatingState;
- (id)sectionHeaderTextColorForNonFloatingState;
- (double)sectionHeaderTopContentInset;
- (bool)sectionHeaderViewsFloat;
- (void)setDefaultAllowsSectionHeaders:(bool)arg1;
- (void)setDefaultContentDescriptor:(id)arg1;
- (void)setDefaultSectionHeaderContentDescriptor:(id)arg1;
- (void)setEntityProvider:(id)arg1;
- (void)setScrollIndicatorStyle:(long long)arg1;
- (void)setSectionHeaderHairlineStyleForNonFloatingState:(long long)arg1;
- (void)setSectionHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setSectionHeaderTopContentInset:(double)arg1;
- (void)setSectionHeaderViewsFloat:(bool)arg1;
- (void)setTrailingSeparatorInsetFollowsLayoutInsets:(bool)arg1;
- (void)setUsesUppercaseLettersForSectionHeaderTitles:(bool)arg1;
- (bool)trailingSeparatorInsetFollowsLayoutInsets;
- (bool)usesUppercaseLettersForSectionHeaderTitles;

@end
