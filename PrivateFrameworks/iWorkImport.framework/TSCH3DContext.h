/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DContext : NSObject <NSCopying> {
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        bool linearFilter; 
        bool discardHint; 
    }  mCurrentFramebufferAttributes;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)currentFramebufferAttributes;
- (unsigned long long)hash;
- (void)setCurrentFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; bool x6; bool x7; }*)arg1;

@end
