/*
 * LipikaIME is a user-configurable phonetic Input Method Engine for Mac OS X.
 * Copyright (C) 2013 Ranganath Atreya
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#import <Foundation/Foundation.h>
#import "DJTrieNode.h"

@protocol DJReadOnlyTrie <NSObject>

-(DJTrieNode *)trieHead;
-(DJTrieNode *)nodeForKey:(NSString *)key;
-(DJTrieNode *)nextNodeFromNode:(DJTrieNode *)currentNode forKey:(NSString *)key;

@end
