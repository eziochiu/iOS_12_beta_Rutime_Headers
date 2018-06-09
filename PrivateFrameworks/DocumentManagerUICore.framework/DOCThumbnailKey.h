/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailKey : NSObject <NSCopying> {
    bool  _isInteractive;
    double  _minimumSize;
    NSObject<NSCopying> * _primaryKey;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _style;
}

@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) double minimumSize;
@property (nonatomic, readonly) NSObject<NSCopying> *primaryKey;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 isInteractive:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (double)minimumSize;
- (id)primaryKey;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)style;

@end
