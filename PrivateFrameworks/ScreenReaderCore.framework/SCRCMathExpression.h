/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathExpression : NSObject {
    unsigned long long  _cachedMaximumDepth;
    SCRCMathExpression * _parent;
}

@property (nonatomic, readonly) bool beginsWithSpace;
@property (nonatomic, readonly) bool canBeUsedWithBase;
@property (nonatomic, readonly) bool canBeUsedWithRange;
@property (nonatomic, readonly) bool canBeWrappedInLatexMathIndicators;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) bool endsWithSpace;
@property (nonatomic, readonly) unsigned long long fractionLevel;
@property (nonatomic, readonly) bool hasSimpleArrayOfChildren;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) bool isBaseSubSuperscript;
@property (nonatomic, readonly) bool isEllipsis;
@property (nonatomic, readonly) bool isFenceDelimiter;
@property (nonatomic, readonly) bool isFunctionName;
@property (nonatomic, readonly) bool isInteger;
@property (nonatomic, readonly) bool isMultiRowTable;
@property (nonatomic, readonly) bool isNaturalSuperscript;
@property (nonatomic, readonly) bool isNumber;
@property (nonatomic, readonly) bool isOperationSymbol;
@property (nonatomic, readonly) bool isRangeSubSuperscript;
@property (nonatomic, readonly) bool isSimpleNumericalFraction;
@property (nonatomic, readonly) bool isTermSeparator;
@property (nonatomic, readonly) bool isUnlinedFraction;
@property (nonatomic, readonly) bool isWordOrAbbreviation;
@property (nonatomic, readonly) NSString *latexFormatStringAsOver;
@property (nonatomic, readonly) NSString *latexFormatStringAsUnder;
@property (nonatomic) SCRCMathExpression *parent;
@property (nonatomic, readonly) NSArray *siblings;
@property (nonatomic, readonly) NSArray *subExpressions;

+ (Class)_classForExpressionType:(id)arg1;
+ (id)mathExpressionWithDictionary:(id)arg1;
+ (void)setPathToSegmentOrderingPlist:(id)arg1;

- (void).cxx_destruct;
- (void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2;
- (id)_scrcBundle;
- (id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3;
- (bool)beginsWithSpace;
- (bool)canBeUsedWithBase;
- (bool)canBeUsedWithRange;
- (bool)canBeWrappedInLatexMathIndicators;
- (bool)canFormWordStartingWithExpression:(id)arg1;
- (id)children;
- (id)dollarCodeDescription;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (bool)endsWithSpace;
- (id)fenceDelimiters;
- (unsigned long long)fractionLevel;
- (bool)hasSimpleArrayOfChildren;
- (id)initWithDictionary:(id)arg1;
- (long long)integerValue;
- (bool)isBaseSubSuperscript;
- (bool)isEllipsis;
- (bool)isFenceDelimiter;
- (bool)isFunctionName;
- (bool)isInteger;
- (bool)isMultiRowTable;
- (bool)isNaturalSuperscript;
- (bool)isNumber;
- (bool)isOperationSymbol;
- (bool)isRangeSubSuperscript;
- (bool)isSimpleNumericalFraction;
- (bool)isTermSeparator;
- (bool)isUnlinedFraction;
- (bool)isWordOrAbbreviation;
- (id)latexDescription;
- (id)latexDescriptionForChildrenJoinedByString:(id)arg1;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)latexFormatStringAsOver;
- (id)latexFormatStringAsUnder;
- (id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(bool)arg2;
- (id)latexIdentifierForIdentifier:(id)arg1;
- (id)latexMathModeDescription;
- (id)localizedAttributedStringForKey:(id)arg1;
- (id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2;
- (id)localizedSegmentOrderingForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForNumber:(id)arg1;
- (id)mathMLString;
- (unsigned long long)maximumDepth;
- (unsigned long long)maximumFractionLevelOfSubExpressions;
- (unsigned long long)numberOfTables;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)siblings;
- (id)speakableDescription;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2 isPartOfWord:(bool)arg3;
- (id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3;
- (id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsUpToDepth:(unsigned long long)arg1;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;
- (id)speakableSummary;
- (id)subExpressions;

@end
