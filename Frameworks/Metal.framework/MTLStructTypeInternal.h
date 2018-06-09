/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long  _dataType;
    NSDictionary * _dictionary;
    bool  _isIndirectArgumentBuffer;
    NSArray * _members;
}

@property bool isIndirectArgumentBuffer;

- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2;
- (bool)isIndirectArgumentBuffer;
- (bool)isStructLayoutThreadSafeWith:(id)arg1;
- (id)memberByName:(id)arg1;
- (id)members;
- (void)setIsIndirectArgumentBuffer:(bool)arg1;

@end
