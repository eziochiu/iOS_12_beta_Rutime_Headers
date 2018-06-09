/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayWidgetSession : PBCodable <NSCopying> {
    NSMutableArray * _countOfArticlesExposedEachSections;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _countOfArticlesExposedPerSections;
    struct { 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetSectionsExposed : 1; 
    }  _has;
    int  _widgetArticleCount;
    NSMutableArray * _widgetSectionIdsExposeds;
    int  _widgetSectionsExposed;
}

@property (nonatomic, retain) NSMutableArray *countOfArticlesExposedEachSections;
@property (nonatomic, readonly) int*countOfArticlesExposedPerSections;
@property (nonatomic, readonly) unsigned long long countOfArticlesExposedPerSectionsCount;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetSectionsExposed;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic, retain) NSMutableArray *widgetSectionIdsExposeds;
@property (nonatomic) int widgetSectionsExposed;

+ (Class)countOfArticlesExposedEachSectionType;
+ (Class)widgetSectionIdsExposedType;

- (void).cxx_destruct;
- (void)addCountOfArticlesExposedEachSection:(id)arg1;
- (void)addCountOfArticlesExposedPerSection:(int)arg1;
- (void)addWidgetSectionIdsExposed:(id)arg1;
- (void)clearCountOfArticlesExposedEachSections;
- (void)clearCountOfArticlesExposedPerSections;
- (void)clearWidgetSectionIdsExposeds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (id)countOfArticlesExposedEachSections;
- (unsigned long long)countOfArticlesExposedEachSectionsCount;
- (int)countOfArticlesExposedPerSectionAtIndex:(unsigned long long)arg1;
- (int*)countOfArticlesExposedPerSections;
- (unsigned long long)countOfArticlesExposedPerSectionsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetSectionsExposed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountOfArticlesExposedEachSections:(id)arg1;
- (void)setCountOfArticlesExposedPerSections:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetSectionsExposed:(bool)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetSectionIdsExposeds:(id)arg1;
- (void)setWidgetSectionsExposed:(int)arg1;
- (int)widgetArticleCount;
- (id)widgetSectionIdsExposedAtIndex:(unsigned long long)arg1;
- (id)widgetSectionIdsExposeds;
- (unsigned long long)widgetSectionIdsExposedsCount;
- (int)widgetSectionsExposed;
- (void)writeTo:(id)arg1;

@end
