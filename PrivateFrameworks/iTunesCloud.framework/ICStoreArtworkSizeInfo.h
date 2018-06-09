/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreArtworkSizeInfo : NSObject {
    bool  _hasMaxSupportedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSupportedSize;
    NSArray * _supportedSizes;
    long long  _type;
}

@property (nonatomic) bool hasMaxSupportedSize;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSupportedSize;
@property (nonatomic, copy) NSArray *supportedSizes;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (bool)hasMaxSupportedSize;
- (struct CGSize { double x1; double x2; })maxSupportedSize;
- (void)setHasMaxSupportedSize:(bool)arg1;
- (void)setMaxSupportedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportedSizes:(id)arg1;
- (void)setType:(long long)arg1;
- (id)supportedSizes;
- (long long)type;

@end
