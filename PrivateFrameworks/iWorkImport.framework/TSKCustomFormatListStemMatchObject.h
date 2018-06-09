/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCustomFormatListStemMatchObject : NSObject <NSCopying> {
    TSUCustomFormat * _customFormat;
}

@property (nonatomic, readonly) TSUCustomFormat *customFormat;

+ (id)stemMatchObjectWithCustomFormat:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFormat;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
