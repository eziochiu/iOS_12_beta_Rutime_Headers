/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFDocument : NSObject {
    double  _cachedHeight;
    double  _cachedWidth;
    struct CGPDFDocument { } * _cgDocument;
    <NSObject><UIPDFDocumentDelegate> * _delegate;
    NSString * _documentID;
    NSString * _documentName;
    unsigned long long  _imageCacheCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _imageCacheLock;
    unsigned long long  _imageCacheLookAhead;
    double  _imageCacheResolution;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numberOfPages;
    UIPDFPageImageCache * _pageImageCache;
    UIPDFPageImageCache * _thumbnailCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _thumbnailLock;
}

@property (readonly) struct CGPDFDocument { }*CGDocument;
@property (nonatomic) <NSObject><UIPDFDocumentDelegate> *delegate;
@property (readonly) NSString *documentID;
@property (readonly) unsigned long long numberOfPages;
@property (retain) UIPDFPageImageCache *pageImageCache;
@property (retain) UIPDFPageImageCache *thumbnailCache;

// Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF

+ (id)documentNamed:(id)arg1;

- (struct CGPDFDocument { }*)CGDocument;
- (bool)allowsCopying;
- (struct CGPDFDocument { }*)copyCGPDFDocument;
- (bool)copyDocumentTo:(id)arg1;
- (id)copyPageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)documentID;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument { }*)arg1;
- (id)initWithURL:(id)arg1;
- (double)maxHeight;
- (double)maxWidth;
- (unsigned long long)numberOfPages;
- (id)pageAtIndex:(unsigned long long)arg1;
- (id)pageImageCache;
- (void)purgePagesBefore:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2 withResolution:(double)arg3;
- (void)setPageImageCache:(id)arg1;
- (void)setThumbnailCache:(id)arg1;
- (double)sumHeight;
- (double)sumWidth;
- (id)thumbnailCache;
- (void)updateWidthHeightCache;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

+ (id)newDocumentWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;

@end
