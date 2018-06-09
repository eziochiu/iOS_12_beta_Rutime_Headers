/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchCategory : NSObject <NSSecureCoding> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
    NSArray * _subcategories;
}

@property (getter=_autocompleteEntry, nonatomic, readonly) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) int displayMode;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSURL *mapsURL;
@property (nonatomic, readonly) NSString *popularTokenString;
@property (nonatomic, readonly) NSString *shortDisplayString;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (getter=isSubCategorySameAsTopLevel, nonatomic, readonly) bool subCategorySameAsTopLevel;
@property (nonatomic, readonly) int subCategoryType;
@property (nonatomic, readonly) NSArray *subcategories;
@property (getter=_suggestionEntryMetadata, nonatomic, readonly) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) <GEOVenueIdentifier> *venueIdentifier;

+ (id)categoryForURL:(id)arg1;
+ (void)sendFeedbackForVisibleCategories:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_autocompleteEntry;
- (id)_browseCategory;
- (id)_suggestionEntryMetadata;
- (int)displayMode;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocompleteEntry:(id)arg1;
- (id)initWithBrowseCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (bool)isSubCategorySameAsTopLevel;
- (id)mapsURL;
- (id)popularTokenString;
- (void)sendFeedback;
- (id)serverMetadata;
- (id)shortDisplayString;
- (int)sortOrder;
- (id)styleAttributes;
- (int)subCategoryType;
- (id)subcategories;
- (id)venueIdentifier;

@end
