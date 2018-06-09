/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFOutline : NSObject {
    PDFOutlinePrivate * _private;
}

@property (nonatomic, retain) PDFAction *action;
@property (nonatomic, retain) PDFDestination *destination;
@property (nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic) bool isOpen;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, readonly) PDFOutline *parent;

- (void).cxx_destruct;
- (id)action;
- (void)addActionToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (bool)addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (id)childArray;
- (id)childAtIndex:(unsigned long long)arg1;
- (bool)childDictionaryReferencesParent:(struct CGPDFDictionary { }*)arg1;
- (void)commonInit;
- (struct __CFDictionary { }*)createDictionaryRef;
- (void)dealloc;
- (id)destination;
- (id)document;
- (id)firstChild;
- (unsigned long long)index;
- (id)init;
- (id)initWithDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 parent:(id)arg3;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateDictionaryRef;
- (bool)isOpen;
- (id)label;
- (id)lastChild;
- (void)lazilyLoadChildren;
- (id)next;
- (unsigned long long)numberOfChildren;
- (int)openDescendantCount;
- (id)parent;
- (id)previous;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeFromParent;
- (void)setAction:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIsOpen:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setParent:(id)arg1;
- (struct CGPDFDictionary { }*)srcDictionaryRef;

@end
