/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPPhrasebook : NSObject {
    struct { 
        union { 
            void *base; 
            struct { /* ? */ } *hdr; 
        } ; 
        unsigned long long size; 
        int fd; 
    }  _pb;
}

- (void)dealloc;
- (void)enumerateEntitiesInText:(id)arg1 block:(id /* block */)arg2;
- (id)initWithPath:(id)arg1;

@end
