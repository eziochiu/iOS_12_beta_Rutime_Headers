/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface __CNCallStack : NSObject {
    unsigned int  _count;
    void ** _frames;
}

- (id)copyArrayRepresentation;
- (void)dealloc;
- (id)description;
- (unsigned int)frameCount;
- (void**)frames;
- (unsigned long long)hash;
- (id)initWithFrames:(void**)arg1 count:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;

@end