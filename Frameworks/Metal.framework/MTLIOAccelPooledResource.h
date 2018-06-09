/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelPooledResource : MTLIOAccelResource {
    /* Warning: unhandled struct encoding: '{_MTLIOAccelResourcePrivate="pool"@"MTLIOAccelResourcePool""entry"{?="tqe_next"@"MTLIOAccelPooledResource""tqe_prev"^@}"time_added"Q"pool_generation"I}' */ struct _MTLIOAccelResourcePrivate { 
        MTLIOAccelResourcePool *pool; 
        struct { 
            MTLIOAccelPooledResource *tqe_next; 
            id *tqe_prev; 
            unsigned long long time_added; 
            unsigned int pool_generation; 
        } entry; 
    }  _priv;
}

@end
