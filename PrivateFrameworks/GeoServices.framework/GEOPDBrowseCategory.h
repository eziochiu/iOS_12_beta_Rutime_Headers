/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBrowseCategory : PBCodable <NSCopying> {
    int  _displayMode;
    NSString * _displayString;
    struct { 
        unsigned int displayMode : 1; 
        unsigned int sortOrder : 1; 
        unsigned int subCategoryType : 1; 
        unsigned int isSubCategorySameAsTopLevel : 1; 
    }  _has;
    bool  _isSubCategorySameAsTopLevel;
    NSString * _popularDisplayToken;
    NSString * _shortDisplayString;
    int  _sortOrder;
    GEOStyleAttributes * _styleAttributes;
    int  _subCategoryType;
    NSMutableArray * _subCategorys;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int displayMode;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic) bool hasDisplayMode;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic) bool hasIsSubCategorySameAsTopLevel;
@property (nonatomic, readonly) bool hasPopularDisplayToken;
@property (nonatomic, readonly) bool hasShortDisplayString;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasSubCategoryType;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic) bool isSubCategorySameAsTopLevel;
@property (nonatomic, retain) NSString *popularDisplayToken;
@property (nonatomic, retain) NSString *shortDisplayString;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic) int subCategoryType;
@property (nonatomic, retain) NSMutableArray *subCategorys;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)subCategoryType;

- (void).cxx_destruct;
- (int)StringAsDisplayMode:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (int)StringAsSubCategoryType:(id)arg1;
- (void)addSubCategory:(id)arg1;
- (void)clearSubCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayMode;
- (id)displayModeAsString:(int)arg1;
- (id)displayString;
- (bool)hasDisplayMode;
- (bool)hasDisplayString;
- (bool)hasIsSubCategorySameAsTopLevel;
- (bool)hasPopularDisplayToken;
- (bool)hasShortDisplayString;
- (bool)hasSortOrder;
- (bool)hasStyleAttributes;
- (bool)hasSubCategoryType;
- (bool)hasSuggestionEntryMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSubCategorySameAsTopLevel;
- (void)mergeFrom:(id)arg1;
- (id)popularDisplayToken;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setHasDisplayMode:(bool)arg1;
- (void)setHasIsSubCategorySameAsTopLevel:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setHasSubCategoryType:(bool)arg1;
- (void)setIsSubCategorySameAsTopLevel:(bool)arg1;
- (void)setPopularDisplayToken:(id)arg1;
- (void)setShortDisplayString:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSubCategoryType:(int)arg1;
- (void)setSubCategorys:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (id)shortDisplayString;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (id)styleAttributes;
- (id)subCategoryAtIndex:(unsigned long long)arg1;
- (int)subCategoryType;
- (id)subCategoryTypeAsString:(int)arg1;
- (id)subCategorys;
- (unsigned long long)subCategorysCount;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
