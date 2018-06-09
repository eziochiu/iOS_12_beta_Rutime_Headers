/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _badgeType;
    bool  _cancelled;
    QLCacheVersionedFileIdentifier * _fileIdentifier;
    bool  _iconMode;
    double  _minimumSize;
    double  _scale;
    long long  _sequenceNumber;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) unsigned long long badgeType;
@property bool cancelled;
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (readonly) bool iconMode;
@property (readonly) float maximumPixelSize;
@property (readonly) double minimumSize;
@property (readonly) double scale;
@property long long sequenceNumber;
@property struct CGSize { double x1; double x2; } size;

+ (bool)supportsSecureCoding;
+ (id)thumbnailRequestForFPItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
+ (id)thumbnailRequestForFPItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (bool)cancelled;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileIdentifier;
- (unsigned long long)hash;
- (bool)iconMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersionedFileIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4 minimumSize:(double)arg5;
- (bool)isEqual:(id)arg1;
- (float)maximumPixelSize;
- (double)minimumSize;
- (double)scale;
- (long long)sequenceNumber;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
