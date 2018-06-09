/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFTilePoolPrivate : NSObject {
    bool  debugColorTileEdge;
    NSMutableDictionary * freeSurfaces;
    PDFTimer * recycleTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  surfacesLock;
    int  tileRenderType;
    NSMutableDictionary * usedSurfaces;
    NSObject<OS_dispatch_queue> * workQueue;
}

- (void).cxx_destruct;

@end
