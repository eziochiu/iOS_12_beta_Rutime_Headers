/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFURLLabelAccessoryItem : NSObject {
    bool  _centerAligned;
    struct CGSize { 
        double width; 
        double height; 
    }  _interpolatedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _spacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _squishedSize;
    double  _squishedSpacing;
    double  _squishedVerticalOffset;
    double  _verticalOffset;
    SFCrossfadingImageView * _view;
}

@property (nonatomic) bool centerAligned;
@property (nonatomic) struct CGSize { double x1; double x2; } interpolatedSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double x1; double x2; } squishedSize;
@property (nonatomic) double squishedSpacing;
@property (nonatomic) double squishedVerticalOffset;
@property (nonatomic) double verticalOffset;
@property (nonatomic, retain) SFCrossfadingImageView *view;

- (void).cxx_destruct;
- (bool)centerAligned;
- (struct CGSize { double x1; double x2; })interpolatedSize;
- (void)setCenterAligned:(bool)arg1;
- (void)setInterpolatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpacing:(double)arg1;
- (void)setSquishedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSquishedSpacing:(double)arg1;
- (void)setSquishedVerticalOffset:(double)arg1;
- (void)setVerticalOffset:(double)arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)spacing;
- (struct CGSize { double x1; double x2; })squishedSize;
- (double)squishedSpacing;
- (double)squishedVerticalOffset;
- (double)verticalOffset;
- (id)view;

@end
