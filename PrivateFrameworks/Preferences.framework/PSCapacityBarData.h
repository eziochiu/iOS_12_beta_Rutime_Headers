/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapacityBarData : NSObject <NSCopying> {
    NSArray * _adjustedCategories;
    long long  _bytesUsed;
    long long  _capacity;
    NSArray * _categories;
    long long  _categoryLimit;
    bool  _hideTinyCategories;
    NSArray * _orderedCategories;
    int  _sortStyle;
}

@property (readonly) NSArray *adjustedCategories;
@property long long bytesUsed;
@property long long capacity;
@property (nonatomic, retain) NSArray *categories;
@property long long categoryLimit;
@property bool hideTinyCategories;
@property (readonly) NSArray *orderedCategories;
@property int sortStyle;

- (void).cxx_destruct;
- (id)adjustedCategories;
- (long long)bytesUsed;
- (long long)capacity;
- (id)categories;
- (long long)categoryLimit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hideTinyCategories;
- (id)orderedCategories;
- (void)setBytesUsed:(long long)arg1;
- (void)setCapacity:(long long)arg1;
- (void)setCategories:(id)arg1;
- (void)setCategoryLimit:(long long)arg1;
- (void)setHideTinyCategories:(bool)arg1;
- (void)setSortStyle:(int)arg1;
- (int)sortStyle;

@end
