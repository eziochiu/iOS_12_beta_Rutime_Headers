/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDResources : NSObject {
    EDCollection * mAlignmentInfos;
    EDCollection * mBorder;
    EDCollection * mBorders;
    EDColorsCollection * mColors;
    EDContentFormatsCollection * mContentFormats;
    EDCollection * mDifferentialStyles;
    EDCollection * mFills;
    EDFontsCollection * mFonts;
    EDLinksCollection * mLinks;
    EDCollection * mNames;
    EDCollection * mStrings;
    EDStylesCollection * mStyles;
    EDTableStylesCollection * mTableStyles;
    EDColorsCollection * mThemes;
}

- (id)alignmentInfos;
- (id)border;
- (id)borders;
- (id)colors;
- (id)contentFormats;
- (void)dealloc;
- (id)description;
- (id)differentialStyles;
- (id)fills;
- (id)fonts;
- (id)initWithStringOptimization:(bool)arg1;
- (id)links;
- (id)names;
- (void)setColors:(id)arg1;
- (void)setThemes:(id)arg1;
- (id)strings;
- (id)styles;
- (id)tableStyles;
- (id)themes;

@end
