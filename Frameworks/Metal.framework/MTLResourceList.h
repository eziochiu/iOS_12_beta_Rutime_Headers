/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceList : NSObject {
    /* Warning: unhandled struct encoding: '{?="buckets"[64S]"numEntries"I"capacity"I"entries"^{MTLResourceListEntry}"pool"@"MTLResourceListPool""entry"{?="tqe_next"@"MTLResourceList""tqe_prev"^@}"time_added"Q}' */ struct { 
        unsigned short buckets[64]; 
        unsigned int numEntries; 
        unsigned int capacity; 
        struct MTLResourceListEntry {} *entries; 
        MTLResourceListPool *pool; 
        struct { 
            MTLResourceList *tqe_next; 
            id *tqe_prev; 
            unsigned long long time_added; 
        } entry; 
    }  _listPriv;
}

- (void)dealloc;
- (id)initWithCapacity:(int)arg1;
- (void)releaseAllObjectsAndReset;

@end
