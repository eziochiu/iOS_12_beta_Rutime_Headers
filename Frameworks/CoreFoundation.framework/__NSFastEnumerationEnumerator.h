/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSFastEnumerationEnumerator : NSEnumerator {
    unsigned long long  _count;
    unsigned long long  _index;
    unsigned long long  _mut;
    <NSFastEnumeration> * _obj;
    /* Warning: unhandled array encoding: '[16@]' */ id  _objects;
    id  _origObj;
    /* Warning: unhandled struct encoding: '{?="state"Q"itemsPtr"^@"mutationsPtr"^Q"extra"[5Q]}' */ struct { 
        unsigned long long state; 
        mutationsPtr **itemsPtr; 
    }  _state;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)nextObject;

@end
