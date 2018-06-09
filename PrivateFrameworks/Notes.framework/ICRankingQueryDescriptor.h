/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICRankingQueryDescriptor : NSObject <NSCopying> {
    NSString * _fieldName;
    long long  _type;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fieldName;
- (unsigned long long)hash;
- (id)initWithFieldName:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
