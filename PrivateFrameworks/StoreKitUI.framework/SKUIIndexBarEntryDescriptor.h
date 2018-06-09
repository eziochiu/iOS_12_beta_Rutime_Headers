/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIndexBarEntryDescriptor : NSObject {
    SKUIArtwork * _artwork;
    NSAttributedString * _attributedString;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    long long  _entryDescriptorType;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _visibilityPriority;
}

@property (nonatomic, retain) SKUIArtwork *artwork;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic) long long entryDescriptorType;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long visibilityPriority;

+ (id)entryDescriptorWithArtwork:(id)arg1;
+ (id)entryDescriptorWithAttributedString:(id)arg1;
+ (id)entryDescriptorWithImage:(id)arg1;
+ (id)placeholderEntryDescriptorWithSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)artwork;
- (id)attributedString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (long long)entryDescriptorType;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEntryDescriptorType:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibilityPriority:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (long long)visibilityPriority;

@end
