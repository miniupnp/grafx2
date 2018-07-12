/* vim:expandtab:ts=2 sw=2:
*/
/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2018 Thomas Bernard
    Copyright 2014 Sergii Pylypenko
    Copyright 2011 Pawel Góralski
    Copyright 2008 Yves Rizoud
    Copyright 2008 Franck Charlet
    Copyright 2008 Adrien Destugues
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/>
*/
/**
 * Objective-C code to retrieve the Mac OS X Pasteboard (Clipboard) text content.
 */
#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>

const char * get_paste_board(void)
{
  NSPasteboard *pasteboard = [NSPasteboard generalPasteboard];
  // only available with 10.6+
  //NSArray *classArray = [NSArray arrayWithObject:[NSString class]];
  //NSDictionary *options = [NSDictionary dictionary];

  //BOOL ok = [pasteboard canReadObjectForClasses:classArray options:options];
  //if (ok) {
  //  NSArray *objectsToPaste = [pasteboard readObjectsForClasses:classArray options:options];
  //  NSString * string = [objectsToPaste objectAtIndex:0];
  //  NSLog(@"%@", string);
  //}

  //NSLog(@"types : %@", [pasteboard types]);
  NSString * string = [pasteboard stringForType:NSStringPboardType];
  NSLog(@"pasteboard text content : %@", string);
  return [string UTF8String];
}
