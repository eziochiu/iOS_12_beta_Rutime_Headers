/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNHeapObject : NSObject {
    NSString * _binary;
    unsigned long long  _bytes;
    NSString * _className;
    unsigned long long  _count;
}

@property (nonatomic, retain) NSString *binary;
@property (nonatomic) unsigned long long bytes;
@property (nonatomic, retain) NSString *className;
@property (nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)binary;
- (unsigned long long)bytes;
- (id)classAndBinaryKey;
- (id)className;
- (unsigned long long)count;
- (id)description;
- (void)setBinary:(id)arg1;
- (void)setBytes:(unsigned long long)arg1;
- (void)setClassName:(id)arg1;
- (void)setCount:(unsigned long long)arg1;

@end
