/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserViewLayoutSpec : NSObject {
    long long  _interfaceOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    long long  _stickerSize;
}

@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, readonly) double minimumInteritemSpacing;
@property (nonatomic, readonly) double minimumLineSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, readonly) long long stickerSize;

+ (id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2;

- (id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2;
- (long long)interfaceOrientation;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (long long)stickerSize;

@end
