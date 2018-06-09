/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (nonatomic) long long alignment;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic) long long baseWritingDirection;
@property (nonatomic) double defaultTabInterval;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double headIndent;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineHeightMultiple;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double maximumLineHeight;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) double paragraphSpacingBefore;
@property (nonatomic, copy) NSArray *tabStops;
@property (nonatomic) double tailIndent;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (void)_mutateTabStops;
- (void)_setLineBoundsOptions:(unsigned long long)arg1;
- (void)addTabStop:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeTabStop:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAllowsHangingPunctuation:(bool)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setDefaultTabInterval:(double)arg1;
- (void)setFirstLineHeadIndent:(double)arg1;
- (void)setHeadIndent:(double)arg1;
- (void)setHeaderLevel:(long long)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setLineHeightMultiple:(double)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setMaximumLineHeight:(double)arg1;
- (void)setMinimumLineHeight:(double)arg1;
- (void)setParagraphSpacing:(double)arg1;
- (void)setParagraphSpacingBefore:(double)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setTabStops:(id)arg1;
- (void)setTailIndent:(double)arg1;
- (void)setTextBlocks:(id)arg1;
- (void)setTextLists:(id)arg1;
- (void)setTighteningFactorForTruncation:(float)arg1;
- (void)setUsesOpticalAlignment:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)NTKHyphenationParagraphStyle;
+ (id)NTKHyphenationParagraphStyleWithFactor:(float)arg1;

@end
