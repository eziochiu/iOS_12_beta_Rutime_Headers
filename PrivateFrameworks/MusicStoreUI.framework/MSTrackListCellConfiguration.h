/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration {
    struct { 
        unsigned long long localIndex; 
        unsigned long long localCount; 
        unsigned long long globalIndex; 
        unsigned long long globalCount; 
    }  _position;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } position;

+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)init;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })position;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)setPosition:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (bool)showContentRating;

@end
