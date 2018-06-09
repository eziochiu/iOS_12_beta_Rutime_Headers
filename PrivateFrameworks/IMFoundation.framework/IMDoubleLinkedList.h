/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDoubleLinkedList : NSObject {
    unsigned long long  _count;
    IMDoubleLinkedListNode * _first;
    IMDoubleLinkedListNode * _last;
}

@property (readonly) unsigned long long count;
@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;

- (id)allObjects;
- (void)appendLinkedListNode:(id)arg1;
- (void)appendObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)first;
- (id)init;
- (id)last;
- (id)popObject;
- (void)pushLinkedListNode:(id)arg1;
- (void)pushObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeLinkedListNode:(id)arg1;
- (void)setFirst:(id)arg1;
- (void)setLast:(id)arg1;

@end
