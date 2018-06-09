/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLFileThumbnailRequest : NSObject {
    unsigned long long  _badgeType;
    NSURL * _fileURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    double  _scale;
}

@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumSize;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (id)fileURL;
- (id)initWithMaximumSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 fileURL:(id)arg5;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGSize { double x1; double x2; })minimumSize;
- (double)scale;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;

@end
