/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_OH2EAT_STREAM_TO_VECTOR_OVERLAP_H
#define INCLUDED_OH2EAT_STREAM_TO_VECTOR_OVERLAP_H

#include <oh2eat/api.h>
#include <gnuradio/sync_decimator.h>

namespace gr {
  namespace oh2eat {

    /*!
     * \brief <+description of block+>
     * \ingroup oh2eat
     *
     */
    class OH2EAT_API stream_to_vector_overlap : virtual public gr::sync_decimator
    {
     public:
      typedef boost::shared_ptr<stream_to_vector_overlap> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of oh2eat::stream_to_vector_overlap.
       *
       * To avoid accidental use of raw pointers, oh2eat::stream_to_vector_overlap's
       * constructor is in a private implementation
       * class. oh2eat::stream_to_vector_overlap::make is the public interface for
       * creating new instances.
       */
      static sptr make(size_t itemsize, size_t vecsize, size_t every_n_items);
    };

  } // namespace oh2eat
} // namespace gr

#endif /* INCLUDED_OH2EAT_STREAM_TO_VECTOR_OVERLAP_H */

