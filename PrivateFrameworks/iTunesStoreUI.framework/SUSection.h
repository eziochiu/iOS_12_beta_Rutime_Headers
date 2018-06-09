/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSection : NSObject {
    SUClientInterface * _clientInterface;
    NSMutableDictionary * _dictionary;
    UIImage * _image;
    UIImage * _moreListImage;
    SUSearchFieldConfiguration * _searchFieldConfiguration;
    NSMutableDictionary * _sectionButtonImages;
    UIImage * _selectedImage;
    UIImage * _selectedMoreListImage;
}

@property (nonatomic, readonly) SUGradient *backgroundGradient;
@property (nonatomic, readonly) long long defaultPNGStyle;
@property (getter=isDefaultSection, nonatomic, readonly) bool defaultSection;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSArray *itemImages;
@property (nonatomic, readonly) NSArray *leftSectionButtons;
@property (nonatomic, readonly) UIColor *loadingIndicatorColor;
@property (nonatomic, readonly) UIColor *loadingTextColor;
@property (nonatomic, readonly) UIColor *loadingTextShadowColor;
@property (nonatomic, readonly) long long minimumNetworkType;
@property (nonatomic, retain) UIImage *moreListImage;
@property (nonatomic, readonly) SUPageSectionGroup *pageSectionGroup;
@property (nonatomic, readonly) NSString *partnerHeader;
@property (nonatomic, readonly) NSArray *rightSectionButtons;
@property (nonatomic, retain) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, retain) UIImage *selectedMoreListImage;
@property (nonatomic, readonly) NSString *title;
@property (getter=isTransient, nonatomic, readonly) bool transient;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *urlBagKey;
@property (getter=isUsingLocalArtwork, nonatomic, readonly) bool usingLocalArtwork;

- (id)_colorForKey:(id)arg1;
- (id)_imageBaseName;
- (long long)_minimumNetworkTypeFromDictionary:(id)arg1;
- (id)_sectionButtonsForKey:(id)arg1;
- (long long)_typeForString:(id)arg1;
- (id)backgroundGradient;
- (void)dealloc;
- (long long)defaultPNGStyle;
- (id)description;
- (id)identifier;
- (id)image;
- (id)imageForSectionButtonWithTag:(long long)arg1;
- (id)initWithClientInterface:(id)arg1;
- (id)initWithClientInterface:(id)arg1 sectionType:(long long)arg2 defaultPNGStyle:(long long)arg3;
- (bool)isDefaultSection;
- (bool)isTransient;
- (bool)isUsingLocalArtwork;
- (id)itemImages;
- (id)leftSectionButtons;
- (bool)loadFromDictionary:(id)arg1 searchField:(id)arg2;
- (id)loadingIndicatorColor;
- (id)loadingTextColor;
- (id)loadingTextShadowColor;
- (long long)minimumNetworkType;
- (id)moreListImage;
- (id)pageSectionGroup;
- (id)partnerHeader;
- (id)rightSectionButtons;
- (id)searchFieldConfiguration;
- (id)selectedImage;
- (id)selectedMoreListImage;
- (void)setImage:(id)arg1;
- (void)setMoreListImage:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setSectionButtonImage:(id)arg1 forTag:(long long)arg2;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedMoreListImage:(id)arg1;
- (id)title;
- (long long)type;
- (id)url;
- (id)urlBagKey;
- (id)valueForProperty:(id)arg1;

@end
